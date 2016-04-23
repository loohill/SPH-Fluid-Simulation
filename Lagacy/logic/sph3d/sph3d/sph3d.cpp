// sph3d.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	SPHSystem *sph = new SPHSystem();
	sph->init();

	sph->stopRunning();
	std::cout << "don't run" << std::endl;
	sph->run();

	sph->setRunning();
	std::cout << "run" << std::endl;
	sph->run();

	//Particle *p;
	//for (unsigned int i = 0; i < sph->getpNum(); i++) {
	//	p = &(sph->particles[i]);
	//	p->printParticle();
	//}

	delete(sph);
    return 0;
}

