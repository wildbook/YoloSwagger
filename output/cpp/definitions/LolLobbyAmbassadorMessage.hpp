#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyAmbassadorMessage_t {
    std::string_t errorCode;
    std::string_t message;
    int32_t_t httpStatus;
    std::string_t implementationDetails;
    nlohmann::json_t payload;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyAmbassadorMessage_t& v) {
    j["errorCode"] = v.errorCode;
    j["message"] = v.message;
    j["httpStatus"] = v.httpStatus;
    j["implementationDetails"] = v.implementationDetails;
    j["payload"] = v.payload;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyAmbassadorMessage_t& v) {
    v.errorCode = j.at("errorCode").get<std::string_t>();
    v.message = j.at("message").get<std::string_t>();
    v.httpStatus = j.at("httpStatus").get<int32_t_t>();
    v.implementationDetails = j.at("implementationDetails").get<std::string_t>();
    v.payload = j.at("payload").get<nlohmann::json_t>();
  }
  inline std::string to_string(const LolLobbyAmbassadorMessage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
