#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatAuthResourceRsoAccessToken_t {
    std::vector<std::string> scopes;
    uint64_t expiry;
    std::string token;
  };

  inline void to_json(nlohmann::json& j, const LolChatAuthResourceRsoAccessToken_t& v) {
    j["scopes"] = v.scopes;
    j["expiry"] = v.expiry;
    j["token"] = v.token;
  }

  inline void from_json(const nlohmann::json& j, LolChatAuthResourceRsoAccessToken_t& v) {
    v.scopes = j.at("scopes").get<std::vector<std::string>>();
    v.expiry = j.at("expiry").get<uint64_t>();
    v.token = j.at("token").get<std::string>();
  }
}
