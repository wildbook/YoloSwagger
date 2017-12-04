#ifndef SWAGGER_TYPES_LolLobbyAmbassadorMessage_HPP
#define SWAGGER_TYPES_LolLobbyAmbassadorMessage_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyAmbassadorMessage {
    // 
    std::string errorCode;
    // 
    std::string message;
    // 
    int32_t httpStatus;
    // 
    std::string implementationDetails;
    // 
    nlohmann::json payload;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyAmbassadorMessage& v) {
    j["errorCode"] = v.errorCode;
    j["message"] = v.message;
    j["httpStatus"] = v.httpStatus;
    j["implementationDetails"] = v.implementationDetails;
    j["payload"] = v.payload;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyAmbassadorMessage& v) {
    v.errorCode = j.at("errorCode").get<std::string>;
    v.message = j.at("message").get<std::string>;
    v.httpStatus = j.at("httpStatus").get<int32_t>;
    v.implementationDetails = j.at("implementationDetails").get<std::string>;
    v.payload = j.at("payload").get<nlohmann::json>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyAmbassadorMessage_HPP
