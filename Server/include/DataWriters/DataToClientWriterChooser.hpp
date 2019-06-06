/**
*	@file DataToClientWriterChooser.hpp
*	@brief 
*/

#ifndef DataToClientWriterChooser_hpp
#define DataToClientWriterChooser_hpp

#include <functional>
#include <map>

#include "../ClientConnectionType.hpp"
#include "../Client.hpp"

/**
*	@class DataToClientWriterChooser
*/
class DataToClientWriterChooser final
{
public:
	/**
	*	
	*	@param clientConnectionType
	*	@see ClientConnectionType
	*	@returns 
	*/
	static std::function<int(Client&)> chooseDataToClientWriter(ClientConnectionType clientConnectionType) {
		return DATA_TO_CLIENT_WRITERS_BY_CONNECTION_TYPE[clientConnectionType];
	}

private:

	static std::map<ClientConnectionType, std::function<int(Client&)>> DATA_TO_CLIENT_WRITERS_BY_CONNECTION_TYPE;
};

#endif // DataToClientWriterChooser_hpp