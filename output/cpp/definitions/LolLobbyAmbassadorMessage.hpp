#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyAmbassadorMessage_t {
    int32_t httpStatus;
    std::string message;
    nlohmann::json payload;
    std::string errorCode;
    std::string implementationDetails;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyAmbassadorMessage_t& v) {
    j["httpStatus"] = v.httpStatus;
    j["message"] = v.message;
    j["payload"] = v.payload;
    j["errorCode"] = v.errorCode;
    j["implementationDetails"] = v.implementationDetails;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyAmbassadorMessage_t& v) {
    v.httpStatus = j.at("httpStatus").get<int32_t>();
    v.message = j.at("message").get<std::string>();
    v.payload = j.at("payload").get<nlohmann::json>();
    v.errorCode = j.at("errorCode").get<std::string>();
    v.implementationDetails = j.at("implementationDetails").get<std::string>();
  }
}
