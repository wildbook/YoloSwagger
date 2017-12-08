#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsOwnership.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionMinimal_t {
    bool freeToPlay;
    std::vector<std::string> roles;
    std::vector<std::string> disabledQueues;
    std::string name;
    LolChampionsCollectionsOwnership_t ownership;
    std::string stingerSfxPath;
    std::string banVoPath;
    uint64_t purchased;
    int32_t id;
    std::string squarePortraitPath;
    bool rankedPlayEnabled;
    bool active;
    std::string chooseVoPath;
    bool botEnabled;
    std::string alias;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionMinimal_t& v) {
    j["freeToPlay"] = v.freeToPlay;
    j["roles"] = v.roles;
    j["disabledQueues"] = v.disabledQueues;
    j["name"] = v.name;
    j["ownership"] = v.ownership;
    j["stingerSfxPath"] = v.stingerSfxPath;
    j["banVoPath"] = v.banVoPath;
    j["purchased"] = v.purchased;
    j["id"] = v.id;
    j["squarePortraitPath"] = v.squarePortraitPath;
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["active"] = v.active;
    j["chooseVoPath"] = v.chooseVoPath;
    j["botEnabled"] = v.botEnabled;
    j["alias"] = v.alias;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionMinimal_t& v) {
    v.freeToPlay = j.at("freeToPlay").get<bool>();
    v.roles = j.at("roles").get<std::vector<std::string>>();
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>();
    v.name = j.at("name").get<std::string>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.stingerSfxPath = j.at("stingerSfxPath").get<std::string>();
    v.banVoPath = j.at("banVoPath").get<std::string>();
    v.purchased = j.at("purchased").get<uint64_t>();
    v.id = j.at("id").get<int32_t>();
    v.squarePortraitPath = j.at("squarePortraitPath").get<std::string>();
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>();
    v.active = j.at("active").get<bool>();
    v.chooseVoPath = j.at("chooseVoPath").get<std::string>();
    v.botEnabled = j.at("botEnabled").get<bool>();
    v.alias = j.at("alias").get<std::string>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionMinimal_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
