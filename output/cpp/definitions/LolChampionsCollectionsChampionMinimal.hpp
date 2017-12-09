#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionMinimal_t {
    LolChampionsCollectionsOwnership_t ownership;
    bool active;
    std::string stingerSfxPath;
    std::string banVoPath;
    bool botEnabled;
    bool rankedPlayEnabled;
    std::string squarePortraitPath;
    std::string name;
    std::vector<std::string> disabledQueues;
    std::string chooseVoPath;
    std::vector<std::string> roles;
    int32_t id;
    std::string alias;
    uint64_t purchased;
    bool freeToPlay;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionMinimal_t& v) {
    j["ownership"] = v.ownership;
    j["active"] = v.active;
    j["stingerSfxPath"] = v.stingerSfxPath;
    j["banVoPath"] = v.banVoPath;
    j["botEnabled"] = v.botEnabled;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["squarePortraitPath"] = v.squarePortraitPath;
    j["name"] = v.name;
    j["disabledQueues"] = v.disabledQueues;
    j["chooseVoPath"] = v.chooseVoPath;
    j["roles"] = v.roles;
    j["id"] = v.id;
    j["alias"] = v.alias;
    j["purchased"] = v.purchased;
    j["freeToPlay"] = v.freeToPlay;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionMinimal_t& v) {
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.active = j.at("active").get<bool>();
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>();
    v.banVoPath = j.at("banVoPath").get<std::string>();
    v.botEnabled = j.at("botEnabled").get<bool>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>();
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>();
    v.roles = j.at("roles").get<std::vector<std::string>>();
    v.id = j.at("id").get<int32_t>();
    v.alias = j.at("alias").get<std::string>();
    v.purchased = j.at("purchased").get<uint64_t>();
    v.freeToPlay = j.at("freeToPlay").get<bool>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionMinimal_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
