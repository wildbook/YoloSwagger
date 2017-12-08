#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyAmbassadorMessage_t {
    std::string errorCode;
    std::string message;
    int32_t httpStatus;
    std::string implementationDetails;
    nlohmann::json payload;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyAmbassadorMessage_t& v) {
    j["errorCode"] = v.errorCode;
    j["message"] = v.message;
    j["httpStatus"] = v.httpStatus;
    j["implementationDetails"] = v.implementationDetails;
    j["payload"] = v.payload;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyAmbassadorMessage_t& v) {
    v.errorCode = j.at("errorCode").get<std::string>();
    v.message = j.at("message").get<std::string>();
    v.httpStatus = j.at("httpStatus").get<int32_t>();
    v.implementationDetails = j.at("implementationDetails").get<std::string>();
    v.payload = j.at("payload").get<nlohmann::json>();
  }
  inline std::string to_string(const LolLobbyAmbassadorMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
