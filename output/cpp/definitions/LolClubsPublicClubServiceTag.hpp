#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClubsPublicClubServiceTag_t {
    std::string name;
    std::string tag;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicClubServiceTag_t& v) {
    j["name"] = v.name;
    j["tag"] = v.tag;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicClubServiceTag_t& v) {
    v.name = j.at("name").get<std::string>();
    v.tag = j.at("tag").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolClubsPublicClubServiceTag_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
