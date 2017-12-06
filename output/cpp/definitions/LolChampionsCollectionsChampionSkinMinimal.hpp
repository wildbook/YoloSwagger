#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinMinimal_t {
    LolChampionsCollectionsOwnership_t ownership;
    int32_t championId;
    std::optional<std::string> chromaPath;
    bool disabled;
    int32_t id;
    bool stillObtainable;
    std::string splashPath;
    bool isBase;
    std::string name;
    bool lastSelected;
    std::string tilePath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkinMinimal_t& v) {
    j["ownership"] = v.ownership;
    j["championId"] = v.championId;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["disabled"] = v.disabled;
    j["id"] = v.id;
    j["stillObtainable"] = v.stillObtainable;
    j["splashPath"] = v.splashPath;
    j["isBase"] = v.isBase;
    j["name"] = v.name;
    j["lastSelected"] = v.lastSelected;
    j["tilePath"] = v.tilePath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkinMinimal_t& v) {
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.championId = j.at("championId").get<int32_t>();
    if(auto it = j.find("chromaPath"); it != j.end() !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.disabled = j.at("disabled").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.isBase = j.at("isBase").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    v.tilePath = j.at("tilePath").get<std::string>();
  }
}
