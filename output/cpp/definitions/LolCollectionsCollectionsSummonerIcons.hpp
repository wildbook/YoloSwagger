#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsCollectionsSummonerIcons_t {
    uint64_t_t summonerId;
    std::vector<int32_t> icons;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerIcons_t& v) {
    j["summonerId"] = v.summonerId;
    j["icons"] = v.icons;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerIcons_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.icons = j.at("icons").get<std::vector<int32_t>>();
  }
  inline std::string to_string(const LolCollectionsCollectionsSummonerIcons_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
