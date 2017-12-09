#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinMinimal_t {
    LolChampionsCollectionsOwnership_t ownership;
    bool lastSelected;
    int32_t championId;
    std::string splashPath;
    int32_t id;
    bool isBase;
    std::string tilePath;
    std::optional<std::string> chromaPath;
    bool stillObtainable;
    std::string name;
    bool disabled;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkinMinimal_t& v) {
    j["ownership"] = v.ownership;
    j["lastSelected"] = v.lastSelected;
    j["championId"] = v.championId;
    j["splashPath"] = v.splashPath;
    j["id"] = v.id;
    j["isBase"] = v.isBase;
    j["tilePath"] = v.tilePath;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["stillObtainable"] = v.stillObtainable;
    j["name"] = v.name;
    j["disabled"] = v.disabled;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkinMinimal_t& v) {
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.isBase = j.at("isBase").get<bool>();
    v.tilePath = j.at("tilePath").get<std::string>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.disabled = j.at("disabled").get<bool>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionSkinMinimal_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
