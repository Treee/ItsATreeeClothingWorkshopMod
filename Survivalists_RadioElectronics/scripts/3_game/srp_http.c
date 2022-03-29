class RadioTowerRestCallback extends RestCallback
{
	override void OnError( int errorCode )
	{
		// override this with your implementation
		Print("RadioTowerRestCallback !!! OnError() ");
	};

	override void OnTimeout()
	{
		// override this with your implementation
		Print("RadioTowerRestCallback !!! OnTimeout() ");
	};

	/**
	\brief Called when data arrived and/ or response processed successfully
	*/
	override void OnSuccess( string data, int dataSize )
	{
		// override this with your implementation
		Print("RadioTowerRestCallback !!! OnSuccess() size=" + dataSize );
		if( dataSize > 0 )
			Print(data); // !!! NOTE: Print() will not output string longer than 1024b, check your dataSize !!!
	};

	/**
	\brief Called when data arrived and/ or file created successfully
	*/
	override void OnFileCreated( string fileName, int dataSize )
	{
		// override this with your implementation
		Print("RadioTowerRestCallback !!! OnFileCreated() file=" + fileName + " size=" + dataSize );
	};

};