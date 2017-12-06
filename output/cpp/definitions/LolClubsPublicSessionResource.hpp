#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClubsPublicSessionResource_t {
    std::string sessionState;
    uint32_t sessionExpire;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicSessionResource_t& v) {
    j["sessionState"] = v.sessionState;
    j["sessionExpire"] = v.sessionExpire;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicSessionResource_t& v) {
    v.sessionState = j.at("sessionState").get<std::string>();
    v.sessionExpire = j.at("sessionExpire").get<uint32_t>();
  }
}
