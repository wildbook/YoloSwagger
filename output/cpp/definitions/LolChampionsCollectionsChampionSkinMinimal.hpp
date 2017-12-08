#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinMinimal_t {
    int32_t championId;
    std::string name;
    bool stillObtainable;
    bool lastSelected;
    bool disabled;
    std::string splashPath;
    LolChampionsCollectionsOwnership_t ownership;
    std::string tilePath;
    int32_t id;
    bool isBase;
    std::optional<std::string> chromaPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkinMinimal_t& v) {
    j["championId"] = v.championId;
    j["name"] = v.name;
    j["stillObtainable"] = v.stillObtainable;
    j["lastSelected"] = v.lastSelected;
    j["disabled"] = v.disabled;
    j["splashPath"] = v.splashPath;
    j["ownership"] = v.ownership;
    j["tilePath"] = v.tilePath;
    j["id"] = v.id;
    j["isBase"] = v.isBase;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkinMinimal_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    v.disabled = j.at("disabled").get<bool>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.isBase = j.at("isBase").get<bool>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionSkinMinimal_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
