#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersUIOffer_t {
    bool owned;
    int64_t discountPrice;
    int32_t championId;
    std::string expirationDate;
    bool revealed;
    std::string id;
    int32_t skinId;
    std::string type;
    std::string skinName;
    int64_t originalPrice;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersUIOffer_t& v) {
    j["owned"] = v.owned;
    j["discountPrice"] = v.discountPrice;
    j["championId"] = v.championId;
    j["expirationDate"] = v.expirationDate;
    j["revealed"] = v.revealed;
    j["id"] = v.id;
    j["skinId"] = v.skinId;
    j["type"] = v.type;
    j["skinName"] = v.skinName;
    j["originalPrice"] = v.originalPrice;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersUIOffer_t& v) {
    v.owned = j.at("owned").get<bool>();
    v.discountPrice = j.at("discountPrice").get<int64_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.expirationDate = j.at("expirationDate").get<std::string>();
    v.revealed = j.at("revealed").get<bool>();
    v.id = j.at("id").get<std::string>();
    v.skinId = j.at("skinId").get<int32_t>();
    v.type = j.at("type").get<std::string>();
    v.skinName = j.at("skinName").get<std::string>();
    v.originalPrice = j.at("originalPrice").get<int64_t>();
  }
  inline std::string to_string(const LolPersonalizedOffersUIOffer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
