#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
#include "LolChampionsGameDataChampionChroma.hpp"
namespace leagueapi {
  struct LolChampionsGameDataChampionSkin_t {
    std::string rarityGemPath;
    std::string cardPath;
    std::vector<LolChampionsGameDataChampionChroma_t> chromas;
    std::optional<std::string> skinType;
    std::optional<std::string> chromaPath;
    int32_t id;
    std::vector<LolChampionsCollectionsChampionSkinEmblem_t> emblems;
    std::string splashPath;
    std::string tilePath;
    std::optional<std::string> featuresText;
    std::optional<std::string> splashVideoPath;
    std::string uncenteredSplashPath;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampionSkin_t& v) {
    j["rarityGemPath"] = v.rarityGemPath;
    j["cardPath"] = v.cardPath;
    j["chromas"] = v.chromas;
    if(v.skinType)
      j["skinType"] = *v.skinType;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["id"] = v.id;
    j["emblems"] = v.emblems;
    j["splashPath"] = v.splashPath;
    j["tilePath"] = v.tilePath;
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
    j["uncenteredSplashPath"] = v.uncenteredSplashPath;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampionSkin_t& v) {
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>();
    v.cardPath = j.at("cardPath").get<std::string>();
    v.chromas = j.at("chromas").get<std::vector<LolChampionsGameDataChampionChroma_t>>();
    if(auto it = j.find("skinType"); it != j.end() && !it->is_null())
      v.skinType = it->get<std::string>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem_t>>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.tilePath = j.at("tilePath").get<std::string>();
    if(auto it = j.find("featuresText"); it != j.end() && !it->is_null())
      v.featuresText = it->get<std::string>();
    if(auto it = j.find("splashVideoPath"); it != j.end() && !it->is_null())
      v.splashVideoPath = it->get<std::string>();
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolChampionsGameDataChampionSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
