#pragma once
#include <json.hpp>
#include <optional>
#include "LolPersonalizedOffersPurchaseItem.hpp"
#include "LolPersonalizedOffersWallet.hpp"
namespace leagueapi {
  struct LolPersonalizedOffersPurchaseResponse_t {
    std::vector<LolPersonalizedOffersPurchaseItem_t> items;
    LolPersonalizedOffersWallet_t wallet;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersPurchaseResponse_t& v) {
    j["items"] = v.items;
    j["wallet"] = v.wallet;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersPurchaseResponse_t& v) {
    v.items = j.at("items").get<std::vector<LolPersonalizedOffersPurchaseItem_t>>();
    v.wallet = j.at("wallet").get<LolPersonalizedOffersWallet_t>();
  }
  inline std::string to_string(const LolPersonalizedOffersPurchaseResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
