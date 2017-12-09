#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinEmblemPosition_t {
    std::string vertical;
    std::string horizontal;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkinEmblemPosition_t& v) {
    j["vertical"] = v.vertical;
    j["horizontal"] = v.horizontal;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkinEmblemPosition_t& v) {
    v.vertical = j.at("vertical").get<std::string>();
    v.horizontal = j.at("horizontal").get<std::string>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionSkinEmblemPosition_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
