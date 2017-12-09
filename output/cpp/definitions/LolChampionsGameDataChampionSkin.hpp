#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsGameDataChampionChroma.hpp"
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
namespace leagueapi {
  struct LolChampionsGameDataChampionSkin_t {
    std::string uncenteredSplashPath;
    std::vector<LolChampionsGameDataChampionChroma_t> chromas;
    std::vector<LolChampionsCollectionsChampionSkinEmblem_t> emblems;
    std::string rarityGemPath;
    std::string cardPath;
    std::string splashPath;
    std::optional<std::string> splashVideoPath;
    std::optional<std::string> skinType;
    std::string tilePath;
    std::optional<std::string> featuresText;
    std::string name;
    std::optional<std::string> chromaPath;
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampionSkin_t& v) {
    j["uncenteredSplashPath"] = v.uncenteredSplashPath;
    j["chromas"] = v.chromas;
    j["emblems"] = v.emblems;
    j["rarityGemPath"] = v.rarityGemPath;
    j["cardPath"] = v.cardPath;
    j["splashPath"] = v.splashPath;
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
    if(v.skinType)
      j["skinType"] = *v.skinType;
    j["tilePath"] = v.tilePath;
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
    j["name"] = v.name;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampionSkin_t& v) {
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>();
    v.chromas = j.at("chromas").get<std::vector<LolChampionsGameDataChampionChroma_t>>();
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem_t>>();
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>();
    v.cardPath = j.at("cardPath").get<std::string>();
    v.splashPath = j.at("splashPath").get<std::string>();
    if(auto it = j.find("splashVideoPath"); it != j.end() && !it->is_null())
      v.splashVideoPath = it->get<std::string>();
    if(auto it = j.find("skinType"); it != j.end() && !it->is_null())
      v.skinType = it->get<std::string>();
    v.tilePath = j.at("tilePath").get<std::string>();
    if(auto it = j.find("featuresText"); it != j.end() && !it->is_null())
      v.featuresText = it->get<std::string>();
    v.name = j.at("name").get<std::string>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.id = j.at("id").get<int32_t>();
  }
  inline std::string to_string(const LolChampionsGameDataChampionSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
