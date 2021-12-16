#ifndef VECTORHELPER_HPP
#define VECTORHELPER_HPP

#include<vector>
#include<queue>
namespace vectorfunctions{
    struct awesome_vector_t{
        private:
            std::vector<int> _container;
        
        public:
            void add_value  ();
            void print_first();
            void print_last ();
            void print_all  ();
            void shuffle    ();
            void delete_last();
            void multiply   ();
    };
    struct awesome_queue_t{
        private:
            std::queue<int> _container;
        
        public:
            void add_value  ();
            void print_first();
            void print_last ();
            void print_all  ();
            void shuffle    ();
            void delete_last();
            void multiply   ();
    };
}
#endif