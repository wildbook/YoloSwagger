#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinMinimal_t {
    int32_t championId;
    std::optional<std::string> chromaPath;
    bool disabled;
    int32_t id;
    bool isBase;
    bool lastSelected;
    std::string name;
    LolChampionsCollectionsOwnership_t ownership;
    std::string splashPath;
    bool stillObtainable;
    std::string tilePath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkinMinimal_t& v) {
    j["championId"] = v.championId;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["disabled"] = v.disabled;
    j["id"] = v.id;
    j["isBase"] = v.isBase;
    j["lastSelected"] = v.lastSelected;
    j["name"] = v.name;
    j["ownership"] = v.ownership;
    j["splashPath"] = v.splashPath;
    j["stillObtainable"] = v.stillObtainable;
    j["tilePath"] = v.tilePath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkinMinimal_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    if(auto it = j.find("chromaPath"); it != j.end() !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.disabled = j.at("disabled").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.isBase = j.at("isBase").get<bool>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.tilePath = j.at("tilePath").get<std::string>();
  }
}
