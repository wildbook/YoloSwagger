#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
#include "LolChampionsCollectionsChampionChroma.hpp"
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkin_t {
    LolChampionsCollectionsOwnership_t ownership;
    int32_t championId;
    std::vector<LolChampionsCollectionsChampionChroma_t> chromas;
    std::optional<std::string> featuresText;
    std::string splashPath;
    std::optional<std::string> skinType;
    bool isBase;
    bool lastSelected;
    std::vector<LolChampionsCollectionsChampionSkinEmblem_t> emblems;
    std::optional<std::string> chromaPath;
    bool disabled;
    int32_t id;
    bool stillObtainable;
    std::string rarityGemPath;
    std::string tilePath;
    std::string cardPath;
    std::string name;
    std::string uncenteredSplashPath;
    std::optional<std::string> splashVideoPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkin_t& v) {
    j["ownership"] = v.ownership;
    j["championId"] = v.championId;
    j["chromas"] = v.chromas;
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
    j["splashPath"] = v.splashPath;
    if(v.skinType)
      j["skinType"] = *v.skinType;
    j["isBase"] = v.isBase;
    j["lastSelected"] = v.lastSelected;
    j["emblems"] = v.emblems;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["disabled"] = v.disabled;
    j["id"] = v.id;
    j["stillObtainable"] = v.stillObtainable;
    j["rarityGemPath"] = v.rarityGemPath;
    j["tilePath"] = v.tilePath;
    j["cardPath"] = v.cardPath;
    j["name"] = v.name;
    j["uncenteredSplashPath"] = v.uncenteredSplashPath;
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkin_t& v) {
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.chromas = j.at("chromas").get<std::vector<LolChampionsCollectionsChampionChroma_t>>();
    if(auto it = j.find("featuresText"); it != j.end() !it->is_null())
      v.featuresText = it->get<std::string>();
    v.splashPath = j.at("splashPath").get<std::string>();
    if(auto it = j.find("skinType"); it != j.end() !it->is_null())
      v.skinType = it->get<std::string>();
    v.isBase = j.at("isBase").get<bool>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem_t>>();
    if(auto it = j.find("chromaPath"); it != j.end() !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.disabled = j.at("disabled").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.cardPath = j.at("cardPath").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>();
    if(auto it = j.find("splashVideoPath"); it != j.end() !it->is_null())
      v.splashVideoPath = it->get<std::string>();
  }
}
