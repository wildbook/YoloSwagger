#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
#include "LolChampionsCollectionsChampionChroma.hpp"
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkin_t {
    LolChampionsCollectionsOwnership_t ownership;
    std::string name;
    std::optional<std::string> splashVideoPath;
    std::vector<LolChampionsCollectionsChampionChroma_t> chromas;
    std::optional<std::string> skinType;
    bool stillObtainable;
    std::string uncenteredSplashPath;
    std::string splashPath;
    std::string rarityGemPath;
    bool disabled;
    std::string tilePath;
    bool isBase;
    std::optional<std::string> featuresText;
    std::vector<LolChampionsCollectionsChampionSkinEmblem_t> emblems;
    int32_t id;
    bool lastSelected;
    int32_t championId;
    std::optional<std::string> chromaPath;
    std::string cardPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkin_t& v) {
    j["ownership"] = v.ownership;
    j["name"] = v.name;
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
    j["chromas"] = v.chromas;
    if(v.skinType)
      j["skinType"] = *v.skinType;
    j["stillObtainable"] = v.stillObtainable;
    j["uncenteredSplashPath"] = v.uncenteredSplashPath;
    j["splashPath"] = v.splashPath;
    j["rarityGemPath"] = v.rarityGemPath;
    j["disabled"] = v.disabled;
    j["tilePath"] = v.tilePath;
    j["isBase"] = v.isBase;
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
    j["emblems"] = v.emblems;
    j["id"] = v.id;
    j["lastSelected"] = v.lastSelected;
    j["championId"] = v.championId;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["cardPath"] = v.cardPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkin_t& v) {
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.name = j.at("name").get<std::string>();
    if(auto it = j.find("splashVideoPath"); it != j.end() && !it->is_null())
      v.splashVideoPath = it->get<std::string>();
    v.chromas = j.at("chromas").get<std::vector<LolChampionsCollectionsChampionChroma_t>>();
    if(auto it = j.find("skinType"); it != j.end() && !it->is_null())
      v.skinType = it->get<std::string>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>();
    v.disabled = j.at("disabled").get<bool>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.isBase = j.at("isBase").get<bool>();
    if(auto it = j.find("featuresText"); it != j.end() && !it->is_null())
      v.featuresText = it->get<std::string>();
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem_t>>();
    v.id = j.at("id").get<int32_t>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.cardPath = j.at("cardPath").get<std::string>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
