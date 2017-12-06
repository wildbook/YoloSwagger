#pragma once
#include <json.hpp>
#include <optional>
#include "PhaseRosterSubDTO.hpp"
#include "TicketOfferDTO.hpp"
#include "BuybackMember.hpp"
#include "RosterWithdraw.hpp"
namespace leagueapi {
  struct RosterDynamicStateDTO_t {
    std::vector<BuybackMember_t> members;
    std::vector<uint64_t> phaseCheckinStates;
    std::vector<PhaseRosterSubDTO_t> phaseRosterSubs;
    int64_t rosterId;
    std::vector<TicketOfferDTO_t> ticketOffers;
    int64_t tournamentId;
    RosterWithdraw_t withdraw;
  };

  inline void to_json(nlohmann::json& j, const RosterDynamicStateDTO_t& v) {
    j["members"] = v.members;
    j["phaseCheckinStates"] = v.phaseCheckinStates;
    j["phaseRosterSubs"] = v.phaseRosterSubs;
    j["rosterId"] = v.rosterId;
    j["ticketOffers"] = v.ticketOffers;
    j["tournamentId"] = v.tournamentId;
    j["withdraw"] = v.withdraw;
  }

  inline void from_json(const nlohmann::json& j, RosterDynamicStateDTO_t& v) {
    v.members = j.at("members").get<std::vector<BuybackMember_t>>();
    v.phaseCheckinStates = j.at("phaseCheckinStates").get<std::vector<uint64_t>>();
    v.phaseRosterSubs = j.at("phaseRosterSubs").get<std::vector<PhaseRosterSubDTO_t>>();
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO_t>>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.withdraw = j.at("withdraw").get<RosterWithdraw_t>();
  }
}
