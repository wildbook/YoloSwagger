#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsCollectionsSummonerIcons_t {
    std::vector<int32_t> icons;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsSummonerIcons_t& v) {
    j["icons"] = v.icons;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsSummonerIcons_t& v) {
    v.icons = j.at("icons").get<std::vector<int32_t>>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsSummonerIcons_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
