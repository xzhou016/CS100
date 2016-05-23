class Iterator{
		protected:
			Base* self_ptr;
			Base* current_ptr;

		public:
			Iterator(Base* ptr);
			virtual void first() = 0;
			virtual void next() = 0;
			virtual bool is_done() = 0;
			virtual Base* current() = 0;
};

class OperatorIterator : public Iterator
{
		public:
			OperatorIterator(Base *ptr);
			void first();
			void next();
			bool is_done();
			Base* current();
};
				
class UnaryIterator : public Iterator
{

		public:
			UnaryIterator(Base* ptr);
			void first();
			void next();
			bool is_done();
			Base* current();
};


class NullIterator : public Iterator
{
		public:
			NullIterator(Base* ptr);
			void first();
			void next();
			bool is_done();
			Base* current();
			Base* exception();
};



class PreOrderIterator : public Iterator
{
		protected:
			stack<Iterator*> iterators;	

		public:
			PreOrderIterator(Base* ptr);
			void first();
			void next();
			bool is_done();
			Base* current();
				
};
