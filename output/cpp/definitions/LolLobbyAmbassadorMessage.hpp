#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyAmbassadorMessage_t {
    std::string implementationDetails;
    nlohmann::json payload;
    int32_t httpStatus;
    std::string errorCode;
    std::string message;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyAmbassadorMessage_t& v) {
    j["implementationDetails"] = v.implementationDetails;
    j["payload"] = v.payload;
    j["httpStatus"] = v.httpStatus;
    j["errorCode"] = v.errorCode;
    j["message"] = v.message;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyAmbassadorMessage_t& v) {
    v.implementationDetails = j.at("implementationDetails").get<std::string>();
    v.payload = j.at("payload").get<nlohmann::json>();
    v.httpStatus = j.at("httpStatus").get<int32_t>();
    v.errorCode = j.at("errorCode").get<std::string>();
    v.message = j.at("message").get<std::string>();
  }
  inline std::string to_string(const LolLobbyAmbassadorMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
