#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsChampionSkinEmblemPath.hpp"
#include "LolChampionsCollectionsChampionSkinEmblemPosition.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinEmblem_t {
    LolChampionsCollectionsChampionSkinEmblemPosition_t positions;
    LolChampionsCollectionsChampionSkinEmblemPath_t emblemPath;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkinEmblem_t& v) {
    j["positions"] = v.positions;
    j["emblemPath"] = v.emblemPath;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkinEmblem_t& v) {
    v.positions = j.at("positions").get<LolChampionsCollectionsChampionSkinEmblemPosition_t>();
    v.emblemPath = j.at("emblemPath").get<LolChampionsCollectionsChampionSkinEmblemPath_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionSkinEmblem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
