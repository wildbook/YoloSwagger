#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
#include "LolChampionsCollectionsChampionChroma.hpp"
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkin_t {
    bool lastSelected;
    std::optional<std::string> chromaPath;
    std::vector<LolChampionsCollectionsChampionChroma_t> chromas;
    std::optional<std::string> skinType;
    std::string cardPath;
    int32_t id;
    std::optional<std::string> featuresText;
    bool disabled;
    LolChampionsCollectionsOwnership_t ownership;
    std::vector<LolChampionsCollectionsChampionSkinEmblem_t> emblems;
    std::string splashPath;
    bool stillObtainable;
    std::string tilePath;
    std::string name;
    bool isBase;
    std::optional<std::string> splashVideoPath;
    std::string rarityGemPath;
    std::string uncenteredSplashPath;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkin_t& v) {
    j["lastSelected"] = v.lastSelected;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["chromas"] = v.chromas;
    if(v.skinType)
      j["skinType"] = *v.skinType;
    j["cardPath"] = v.cardPath;
    j["id"] = v.id;
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
    j["disabled"] = v.disabled;
    j["ownership"] = v.ownership;
    j["emblems"] = v.emblems;
    j["splashPath"] = v.splashPath;
    j["stillObtainable"] = v.stillObtainable;
    j["tilePath"] = v.tilePath;
    j["name"] = v.name;
    j["isBase"] = v.isBase;
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
    j["rarityGemPath"] = v.rarityGemPath;
    j["uncenteredSplashPath"] = v.uncenteredSplashPath;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkin_t& v) {
    v.lastSelected = j.at("lastSelected").get<bool>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.chromas = j.at("chromas").get<std::vector<LolChampionsCollectionsChampionChroma_t>>();
    if(auto it = j.find("skinType"); it != j.end() && !it->is_null())
      v.skinType = it->get<std::string>();
    v.cardPath = j.at("cardPath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    if(auto it = j.find("featuresText"); it != j.end() && !it->is_null())
      v.featuresText = it->get<std::string>();
    v.disabled = j.at("disabled").get<bool>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem_t>>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.isBase = j.at("isBase").get<bool>();
    if(auto it = j.find("splashVideoPath"); it != j.end() && !it->is_null())
      v.splashVideoPath = it->get<std::string>();
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>();
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
