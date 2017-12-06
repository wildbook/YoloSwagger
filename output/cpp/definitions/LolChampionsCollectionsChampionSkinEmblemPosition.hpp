#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinEmblemPosition_t {
    std::string horizontal;
    std::string vertical;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkinEmblemPosition_t& v) {
    j["horizontal"] = v.horizontal;
    j["vertical"] = v.vertical;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkinEmblemPosition_t& v) {
    v.horizontal = j.at("horizontal").get<std::string>();
    v.vertical = j.at("vertical").get<std::string>();
  }
}
