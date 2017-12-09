#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsChampionSkinEmblemPosition.hpp"
#include "LolChampionsCollectionsChampionSkinEmblemPath.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinEmblem_t {
    LolChampionsCollectionsChampionSkinEmblemPath_t emblemPath;
    std::string name;
    LolChampionsCollectionsChampionSkinEmblemPosition_t positions;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkinEmblem_t& v) {
    j["emblemPath"] = v.emblemPath;
    j["name"] = v.name;
    j["positions"] = v.positions;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkinEmblem_t& v) {
    v.emblemPath = j.at("emblemPath").get<LolChampionsCollectionsChampionSkinEmblemPath_t>();
    v.name = j.at("name").get<std::string>();
    v.positions = j.at("positions").get<LolChampionsCollectionsChampionSkinEmblemPosition_t>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionSkinEmblem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
