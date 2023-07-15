// ----------------------------------------------------------------------------
// RayLib Project Template
// ----------------------------------------------------------------------------

#pragma once


namespace YourNameSpace {

	class MainGame {

		public:
			MainGame();
			virtual ~MainGame();
			
			bool initialize();
			void start();
			void stop();

			void update();
			bool isRunning();

		protected:
			
		private:
			bool m_running{ false };
			float m_dt{};

	};
		
} // end namespace