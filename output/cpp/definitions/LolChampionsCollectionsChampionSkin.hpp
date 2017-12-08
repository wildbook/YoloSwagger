#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsChampionChroma.hpp"
#include "LolChampionsCollectionsOwnership.hpp"
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkin_t {
    std::string uncenteredSplashPath;
    LolChampionsCollectionsOwnership_t ownership;
    std::optional<std::string> featuresText;
    bool disabled;
    std::string name;
    bool isBase;
    std::string rarityGemPath;
    std::optional<std::string> splashVideoPath;
    std::string splashPath;
    std::optional<std::string> chromaPath;
    std::string tilePath;
    int32_t id;
    std::vector<LolChampionsCollectionsChampionChroma_t> chromas;
    int32_t championId;
    std::vector<LolChampionsCollectionsChampionSkinEmblem_t> emblems;
    bool lastSelected;
    bool stillObtainable;
    std::string cardPath;
    std::optional<std::string> skinType;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkin_t& v) {
    j["uncenteredSplashPath"] = v.uncenteredSplashPath;
    j["ownership"] = v.ownership;
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
    j["disabled"] = v.disabled;
    j["name"] = v.name;
    j["isBase"] = v.isBase;
    j["rarityGemPath"] = v.rarityGemPath;
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
    j["splashPath"] = v.splashPath;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["tilePath"] = v.tilePath;
    j["id"] = v.id;
    j["chromas"] = v.chromas;
    j["championId"] = v.championId;
    j["emblems"] = v.emblems;
    j["lastSelected"] = v.lastSelected;
    j["stillObtainable"] = v.stillObtainable;
    j["cardPath"] = v.cardPath;
    if(v.skinType)
      j["skinType"] = *v.skinType;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkin_t& v) {
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    if(auto it = j.find("featuresText"); it != j.end() && !it->is_null())
      v.featuresText = it->get<std::string>();
    v.disabled = j.at("disabled").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.isBase = j.at("isBase").get<bool>();
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>();
    if(auto it = j.find("splashVideoPath"); it != j.end() && !it->is_null())
      v.splashVideoPath = it->get<std::string>();
    v.splashPath = j.at("splashPath").get<std::string>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.chromas = j.at("chromas").get<std::vector<LolChampionsCollectionsChampionChroma_t>>();
    v.championId = j.at("championId").get<int32_t>();
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem_t>>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.cardPath = j.at("cardPath").get<std::string>();
    if(auto it = j.find("skinType"); it != j.end() && !it->is_null())
      v.skinType = it->get<std::string>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
