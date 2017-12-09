#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersUIOffer_t {
    std::string expirationDate;
    int32_t championId;
    bool revealed;
    std::string id;
    bool owned;
    int32_t skinId;
    int64_t discountPrice;
    int64_t originalPrice;
    std::string skinName;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersUIOffer_t& v) {
    j["expirationDate"] = v.expirationDate;
    j["championId"] = v.championId;
    j["revealed"] = v.revealed;
    j["id"] = v.id;
    j["owned"] = v.owned;
    j["skinId"] = v.skinId;
    j["discountPrice"] = v.discountPrice;
    j["originalPrice"] = v.originalPrice;
    j["skinName"] = v.skinName;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersUIOffer_t& v) {
    v.expirationDate = j.at("expirationDate").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
    v.revealed = j.at("revealed").get<bool>();
    v.id = j.at("id").get<std::string>();
    v.owned = j.at("owned").get<bool>();
    v.skinId = j.at("skinId").get<int32_t>();
    v.discountPrice = j.at("discountPrice").get<int64_t>();
    v.originalPrice = j.at("originalPrice").get<int64_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.type = j.at("type").get<std::string>();
  }
  inline std::string to_string(const LolPersonalizedOffersUIOffer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
