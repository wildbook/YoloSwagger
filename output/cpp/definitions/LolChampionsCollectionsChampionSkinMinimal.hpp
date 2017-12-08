#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinMinimal_t {
    int32_t_t championId;
    std::string_t name;
    bool_t stillObtainable;
    bool_t lastSelected;
    bool_t disabled;
    std::string_t splashPath;
    LolChampionsCollectionsOwnership_t ownership;
    std::string_t tilePath;
    int32_t_t id;
    bool_t isBase;
    std::optional<std::string_t> chromaPath;
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
    v.championId = j.at("championId").get<int32_t_t>();
    v.name = j.at("name").get<std::string_t>();
    v.stillObtainable = j.at("stillObtainable").get<bool_t>();
    v.lastSelected = j.at("lastSelected").get<bool_t>();
    v.disabled = j.at("disabled").get<bool_t>();
    v.splashPath = j.at("splashPath").get<std::string_t>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.tilePath = j.at("tilePath").get<std::string_t>();
    v.id = j.at("id").get<int32_t_t>();
    v.isBase = j.at("isBase").get<bool_t>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string_t>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionSkinMinimal_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
