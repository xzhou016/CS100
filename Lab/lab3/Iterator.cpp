Iterator::Iterator(Base* ptr)
{
		this->self_ptr = ptr;
		this->current_ptr  = self_ptr;
}

OperatorIterator::OperatorIterator(Base* ptr) : Iterator(ptr){ }

void OperatorIterator::first()
{
		current_ptr = self_ptr->get_left();
}

void OperatorIterator::next()
{
		if(current_ptr == self_ptr->get_right())
		{
				current_ptr = NULL;
		}

		else if(current_ptr == self_ptr->get_left())
		{
				current_ptr = self_ptr->get_right();
		}
}

bool OperatorIterator::is_done()
{
		if(current_ptr == NULL)
		{
				return true;
		}

		else
				return false;

}

Base* OperatorIterator::current()
{
	return current_ptr;	
}	


UnaryIterator::UnaryIterator(Base* ptr) : Iterator(ptr) { }


void UnaryIterator::first()
{
		current_ptr = self_ptr->get_left();
}

void UnaryIterator::next()
{
		current_ptr = NULL;
}

bool UnaryIterator::is_done()
{
		if(current_ptr == NULL)
		{
				return true;
		}

		else
				return false;
}




Base* UnaryIterator::current()
{
		return current_ptr;
}

NullIterator::NullIterator(Base* ptr) : Iterator(ptr) { }

void NullIterator::first()
{
}

void NullIterator::next()
{
}

bool NullIterator::is_done()
{
		return true;
}

Base* NullIterator::current()
{
		return self_ptr;
}

Base* NullIterator::exception()
{
		return self_ptr;
}

PreOrderIterator::PreOrderIterator(Base* ptr) : Iterator(ptr) { }

void PreOrderIterator::first()
{
		while(!iterators.empty())
		{
				iterators.pop();
		}

		iterators.push(self_ptr->create_iterator());
		iterators.top()->first();
		
}

void PreOrderIterator::next()
{
	

}


bool PreOrderIterator::is_done()
{
	if(iterators.size() == 0)
	{
		return true;
	}

	else
		return false;
}

Base* PreOrderIterator::current()
{
		return iterators.top()->current();
}
