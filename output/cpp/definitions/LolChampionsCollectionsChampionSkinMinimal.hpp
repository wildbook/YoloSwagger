#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinMinimal_t {
    LolChampionsCollectionsOwnership_t ownership;
    bool isBase;
    std::string splashPath;
    bool disabled;
    bool lastSelected;
    bool stillObtainable;
    std::string name;
    std::optional<std::string> chromaPath;
    int32_t id;
    std::string tilePath;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkinMinimal_t& v) {
    j["ownership"] = v.ownership;
    j["isBase"] = v.isBase;
    j["splashPath"] = v.splashPath;
    j["disabled"] = v.disabled;
    j["lastSelected"] = v.lastSelected;
    j["stillObtainable"] = v.stillObtainable;
    j["name"] = v.name;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["id"] = v.id;
    j["tilePath"] = v.tilePath;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkinMinimal_t& v) {
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.isBase = j.at("isBase").get<bool>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.disabled = j.at("disabled").get<bool>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.name = j.at("name").get<std::string>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionSkinMinimal_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
