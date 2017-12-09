#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatAuthResourceRsoAccessToken_t {
    std::string token;
    std::vector<std::string> scopes;
    uint64_t expiry;
  };

  inline void to_json(nlohmann::json& j, const LolChatAuthResourceRsoAccessToken_t& v) {
    j["token"] = v.token;
    j["scopes"] = v.scopes;
    j["expiry"] = v.expiry;
  }

  inline void from_json(const nlohmann::json& j, LolChatAuthResourceRsoAccessToken_t& v) {
    v.token = j.at("token").get<std::string>();
    v.scopes = j.at("scopes").get<std::vector<std::string>>();
    v.expiry = j.at("expiry").get<uint64_t>();
  }
  inline std::string to_string(const LolChatAuthResourceRsoAccessToken_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
