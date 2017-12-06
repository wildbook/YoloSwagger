#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
#include "LolChampionsCollectionsChampionChroma.hpp"
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkin_t {
    std::string cardPath;
    int32_t championId;
    std::optional<std::string> chromaPath;
    std::vector<LolChampionsCollectionsChampionChroma_t> chromas;
    bool disabled;
    std::vector<LolChampionsCollectionsChampionSkinEmblem_t> emblems;
    std::optional<std::string> featuresText;
    int32_t id;
    bool isBase;
    bool lastSelected;
    std::string name;
    LolChampionsCollectionsOwnership_t ownership;
    std::string rarityGemPath;
    std::optional<std::string> skinType;
    std::string splashPath;
    std::optional<std::string> splashVideoPath;
    bool stillObtainable;
    std::string tilePath;
    std::string uncenteredSplashPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkin_t& v) {
    j["cardPath"] = v.cardPath;
    j["championId"] = v.championId;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["chromas"] = v.chromas;
    j["disabled"] = v.disabled;
    j["emblems"] = v.emblems;
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
    j["id"] = v.id;
    j["isBase"] = v.isBase;
    j["lastSelected"] = v.lastSelected;
    j["name"] = v.name;
    j["ownership"] = v.ownership;
    j["rarityGemPath"] = v.rarityGemPath;
    if(v.skinType)
      j["skinType"] = *v.skinType;
    j["splashPath"] = v.splashPath;
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
    j["stillObtainable"] = v.stillObtainable;
    j["tilePath"] = v.tilePath;
    j["uncenteredSplashPath"] = v.uncenteredSplashPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkin_t& v) {
    v.cardPath = j.at("cardPath").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
    if(auto it = j.find("chromaPath"); it != j.end() !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.chromas = j.at("chromas").get<std::vector<LolChampionsCollectionsChampionChroma_t>>();
    v.disabled = j.at("disabled").get<bool>();
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem_t>>();
    if(auto it = j.find("featuresText"); it != j.end() !it->is_null())
      v.featuresText = it->get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.isBase = j.at("isBase").get<bool>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>();
    if(auto it = j.find("skinType"); it != j.end() !it->is_null())
      v.skinType = it->get<std::string>();
    v.splashPath = j.at("splashPath").get<std::string>();
    if(auto it = j.find("splashVideoPath"); it != j.end() !it->is_null())
      v.splashVideoPath = it->get<std::string>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>();
  }
}
