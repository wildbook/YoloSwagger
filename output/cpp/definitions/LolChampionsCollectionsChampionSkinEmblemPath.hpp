#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinEmblemPath_t {
    std::string small;
    std::string large;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkinEmblemPath_t& v) {
    j["small"] = v.small;
    j["large"] = v.large;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkinEmblemPath_t& v) {
    v.small = j.at("small").get<std::string>();
    v.large = j.at("large").get<std::string>();
  }
}
