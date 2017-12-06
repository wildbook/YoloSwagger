#pragma once
#include <json.hpp>
#include <optional>
#include "LolPersonalizedOffersWallet.hpp"
#include "LolPersonalizedOffersPurchaseItem.hpp"
namespace leagueapi {
  struct LolPersonalizedOffersPurchaseResponse_t {
    LolPersonalizedOffersWallet_t wallet;
    std::vector<LolPersonalizedOffersPurchaseItem_t> items;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersPurchaseResponse_t& v) {
    j["wallet"] = v.wallet;
    j["items"] = v.items;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersPurchaseResponse_t& v) {
    v.wallet = j.at("wallet").get<LolPersonalizedOffersWallet_t>();
    v.items = j.at("items").get<std::vector<LolPersonalizedOffersPurchaseItem_t>>();
  }
}
