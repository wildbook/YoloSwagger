#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
#include "LolChampionsGameDataChampionChroma.hpp"
namespace leagueapi {
  struct LolChampionsGameDataChampionSkin_t {
    std::string cardPath;
    std::optional<std::string> chromaPath;
    std::vector<LolChampionsGameDataChampionChroma_t> chromas;
    std::vector<LolChampionsCollectionsChampionSkinEmblem_t> emblems;
    std::optional<std::string> featuresText;
    int32_t id;
    std::string name;
    std::string rarityGemPath;
    std::optional<std::string> skinType;
    std::string splashPath;
    std::optional<std::string> splashVideoPath;
    std::string tilePath;
    std::string uncenteredSplashPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampionSkin_t& v) {
    j["cardPath"] = v.cardPath;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["chromas"] = v.chromas;
    j["emblems"] = v.emblems;
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
    j["id"] = v.id;
    j["name"] = v.name;
    j["rarityGemPath"] = v.rarityGemPath;
    if(v.skinType)
      j["skinType"] = *v.skinType;
    j["splashPath"] = v.splashPath;
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
    j["tilePath"] = v.tilePath;
    j["uncenteredSplashPath"] = v.uncenteredSplashPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampionSkin_t& v) {
    v.cardPath = j.at("cardPath").get<std::string>();
    if(auto it = j.find("chromaPath"); it != j.end() !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.chromas = j.at("chromas").get<std::vector<LolChampionsGameDataChampionChroma_t>>();
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem_t>>();
    if(auto it = j.find("featuresText"); it != j.end() !it->is_null())
      v.featuresText = it->get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>();
    if(auto it = j.find("skinType"); it != j.end() !it->is_null())
      v.skinType = it->get<std::string>();
    v.splashPath = j.at("splashPath").get<std::string>();
    if(auto it = j.find("splashVideoPath"); it != j.end() !it->is_null())
      v.splashVideoPath = it->get<std::string>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>();
  }
}
