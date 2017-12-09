#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinMinimal_t {
    bool lastSelected;
    std::optional<std::string> chromaPath;
    std::string name;
    bool isBase;
    std::string tilePath;
    bool disabled;
    std::string splashPath;
    int32_t id;
    bool stillObtainable;
    LolChampionsCollectionsOwnership_t ownership;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkinMinimal_t& v) {
    j["lastSelected"] = v.lastSelected;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["name"] = v.name;
    j["isBase"] = v.isBase;
    j["tilePath"] = v.tilePath;
    j["disabled"] = v.disabled;
    j["splashPath"] = v.splashPath;
    j["id"] = v.id;
    j["stillObtainable"] = v.stillObtainable;
    j["ownership"] = v.ownership;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkinMinimal_t& v) {
    v.lastSelected = j.at("lastSelected").get<bool>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.isBase = j.at("isBase").get<bool>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.disabled = j.at("disabled").get<bool>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionSkinMinimal_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
