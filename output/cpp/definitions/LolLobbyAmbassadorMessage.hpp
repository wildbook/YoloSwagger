#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyAmbassadorMessage_t {
    nlohmann::json payload;
    std::string message;
    std::string errorCode;
    std::string implementationDetails;
    int32_t httpStatus;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyAmbassadorMessage_t& v) {
    j["payload"] = v.payload;
    j["message"] = v.message;
    j["errorCode"] = v.errorCode;
    j["implementationDetails"] = v.implementationDetails;
    j["httpStatus"] = v.httpStatus;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyAmbassadorMessage_t& v) {
    v.payload = j.at("payload").get<nlohmann::json>();
    v.message = j.at("message").get<std::string>();
    v.errorCode = j.at("errorCode").get<std::string>();
    v.implementationDetails = j.at("implementationDetails").get<std::string>();
    v.httpStatus = j.at("httpStatus").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyAmbassadorMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
