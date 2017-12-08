#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinMinimal_t {
    std::string tilePath;
    int32_t id;
    LolChampionsCollectionsOwnership_t ownership;
    bool stillObtainable;
    int32_t championId;
    bool disabled;
    bool lastSelected;
    bool isBase;
    std::string name;
    std::string splashPath;
    std::optional<std::string> chromaPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkinMinimal_t& v) {
    j["tilePath"] = v.tilePath;
    j["id"] = v.id;
    j["ownership"] = v.ownership;
    j["stillObtainable"] = v.stillObtainable;
    j["championId"] = v.championId;
    j["disabled"] = v.disabled;
    j["lastSelected"] = v.lastSelected;
    j["isBase"] = v.isBase;
    j["name"] = v.name;
    j["splashPath"] = v.splashPath;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkinMinimal_t& v) {
    v.tilePath = j.at("tilePath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
    v.disabled = j.at("disabled").get<bool>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    v.isBase = j.at("isBase").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.splashPath = j.at("splashPath").get<std::string>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionSkinMinimal_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
