#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClubsPublicSessionResource_t {
    uint32_t_t sessionExpire;
    std::string_t sessionState;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicSessionResource_t& v) {
    j["sessionExpire"] = v.sessionExpire;
    j["sessionState"] = v.sessionState;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicSessionResource_t& v) {
    v.sessionExpire = j.at("sessionExpire").get<uint32_t_t>();
    v.sessionState = j.at("sessionState").get<std::string_t>();
  }
  inline std::string to_string(const LolClubsPublicSessionResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
