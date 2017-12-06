#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersUIOffer_t {
    int64_t originalPrice;
    int32_t championId;
    std::string id;
    std::string expirationDate;
    int32_t skinId;
    std::string skinName;
    bool revealed;
    std::string type;
    int64_t discountPrice;
    bool owned;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersUIOffer_t& v) {
    j["originalPrice"] = v.originalPrice;
    j["championId"] = v.championId;
    j["id"] = v.id;
    j["expirationDate"] = v.expirationDate;
    j["skinId"] = v.skinId;
    j["skinName"] = v.skinName;
    j["revealed"] = v.revealed;
    j["type"] = v.type;
    j["discountPrice"] = v.discountPrice;
    j["owned"] = v.owned;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersUIOffer_t& v) {
    v.originalPrice = j.at("originalPrice").get<int64_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.id = j.at("id").get<std::string>();
    v.expirationDate = j.at("expirationDate").get<std::string>();
    v.skinId = j.at("skinId").get<int32_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.revealed = j.at("revealed").get<bool>();
    v.type = j.at("type").get<std::string>();
    v.discountPrice = j.at("discountPrice").get<int64_t>();
    v.owned = j.at("owned").get<bool>();
  }
}
