#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClubsPublicClubServiceTag_t {
    std::string_t tag;
    std::string_t name;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClubsPublicClubServiceTag_t& v) {
    j["tag"] = v.tag;
    j["name"] = v.name;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClubsPublicClubServiceTag_t& v) {
    v.tag = j.at("tag").get<std::string_t>();
    v.name = j.at("name").get<std::string_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolClubsPublicClubServiceTag_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
