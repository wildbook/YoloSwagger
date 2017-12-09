#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
#include "LolChampionsCollectionsChampionChroma.hpp"
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkin_t {
    std::string uncenteredSplashPath;
    bool isBase;
    std::vector<LolChampionsCollectionsChampionChroma_t> chromas;
    LolChampionsCollectionsOwnership_t ownership;
    std::vector<LolChampionsCollectionsChampionSkinEmblem_t> emblems;
    std::string rarityGemPath;
    bool stillObtainable;
    std::string cardPath;
    std::string splashPath;
    bool disabled;
    int32_t championId;
    std::optional<std::string> skinType;
    std::string tilePath;
    std::optional<std::string> featuresText;
    std::string name;
    std::optional<std::string> chromaPath;
    int32_t id;
    std::optional<std::string> splashVideoPath;
    bool lastSelected;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkin_t& v) {
    j["uncenteredSplashPath"] = v.uncenteredSplashPath;
    j["isBase"] = v.isBase;
    j["chromas"] = v.chromas;
    j["ownership"] = v.ownership;
    j["emblems"] = v.emblems;
    j["rarityGemPath"] = v.rarityGemPath;
    j["stillObtainable"] = v.stillObtainable;
    j["cardPath"] = v.cardPath;
    j["splashPath"] = v.splashPath;
    j["disabled"] = v.disabled;
    j["championId"] = v.championId;
    if(v.skinType)
      j["skinType"] = *v.skinType;
    j["tilePath"] = v.tilePath;
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
    j["name"] = v.name;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["id"] = v.id;
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
    j["lastSelected"] = v.lastSelected;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkin_t& v) {
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>();
    v.isBase = j.at("isBase").get<bool>();
    v.chromas = j.at("chromas").get<std::vector<LolChampionsCollectionsChampionChroma_t>>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem_t>>();
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.cardPath = j.at("cardPath").get<std::string>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.disabled = j.at("disabled").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
    if(auto it = j.find("skinType"); it != j.end() && !it->is_null())
      v.skinType = it->get<std::string>();
    v.tilePath = j.at("tilePath").get<std::string>();
    if(auto it = j.find("featuresText"); it != j.end() && !it->is_null())
      v.featuresText = it->get<std::string>();
    v.name = j.at("name").get<std::string>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.id = j.at("id").get<int32_t>();
    if(auto it = j.find("splashVideoPath"); it != j.end() && !it->is_null())
      v.splashVideoPath = it->get<std::string>();
    v.lastSelected = j.at("lastSelected").get<bool>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
