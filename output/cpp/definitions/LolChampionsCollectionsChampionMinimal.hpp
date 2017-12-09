#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionMinimal_t {
    bool freeToPlay;
    std::string stingerSfxPath;
    std::string alias;
    std::string banVoPath;
    int32_t id;
    bool rankedPlayEnabled;
    bool botEnabled;
    LolChampionsCollectionsOwnership_t ownership;
    std::vector<std::string> disabledQueues;
    std::string name;
    std::vector<std::string> roles;
    uint64_t purchased;
    std::string chooseVoPath;
    std::string squarePortraitPath;
    bool active;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionMinimal_t& v) {
    j["freeToPlay"] = v.freeToPlay;
    j["stingerSfxPath"] = v.stingerSfxPath;
    j["alias"] = v.alias;
    j["banVoPath"] = v.banVoPath;
    j["id"] = v.id;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["botEnabled"] = v.botEnabled;
    j["ownership"] = v.ownership;
    j["disabledQueues"] = v.disabledQueues;
    j["name"] = v.name;
    j["roles"] = v.roles;
    j["purchased"] = v.purchased;
    j["chooseVoPath"] = v.chooseVoPath;
    j["squarePortraitPath"] = v.squarePortraitPath;
    j["active"] = v.active;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionMinimal_t& v) {
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>();
    v.alias = j.at("alias").get<std::string>();
    v.banVoPath = j.at("banVoPath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
    v.botEnabled = j.at("botEnabled").get<bool>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>();
    v.name = j.at("name").get<std::string>();
    v.roles = j.at("roles").get<std::vector<std::string>>();
    v.purchased = j.at("purchased").get<uint64_t>();
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>();
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>();
    v.active = j.at("active").get<bool>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionMinimal_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
