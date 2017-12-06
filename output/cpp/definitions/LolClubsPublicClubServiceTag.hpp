#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClubsPublicClubServiceTag_t {
    uint64_t summonerId;
    std::string name;
    std::string tag;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicClubServiceTag_t& v) {
    j["summonerId"] = v.summonerId;
    j["name"] = v.name;
    j["tag"] = v.tag;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicClubServiceTag_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.tag = j.at("tag").get<std::string>();
  }
}
