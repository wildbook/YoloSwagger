#pragma once
#include <json.hpp>
#include <optional>
#include "BuybackMember.hpp"
#include "TicketOfferDTO.hpp"
#include "RosterWithdraw.hpp"
#include "PhaseRosterSubDTO.hpp"
namespace leagueapi {
  struct RosterDynamicStateDTO_t {
    std::vector<PhaseRosterSubDTO_t> phaseRosterSubs;
    int64_t tournamentId;
    int64_t rosterId;
    RosterWithdraw_t withdraw;
    std::vector<uint64_t> phaseCheckinStates;
    std::vector<TicketOfferDTO_t> ticketOffers;
    std::vector<BuybackMember_t> members;
  };

  inline void to_json(nlohmann::json& j, const RosterDynamicStateDTO_t& v) {
    j["phaseRosterSubs"] = v.phaseRosterSubs;
    j["tournamentId"] = v.tournamentId;
    j["rosterId"] = v.rosterId;
    j["withdraw"] = v.withdraw;
    j["phaseCheckinStates"] = v.phaseCheckinStates;
    j["ticketOffers"] = v.ticketOffers;
    j["members"] = v.members;
  }

  inline void from_json(const nlohmann::json& j, RosterDynamicStateDTO_t& v) {
    v.phaseRosterSubs = j.at("phaseRosterSubs").get<std::vector<PhaseRosterSubDTO_t>>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.withdraw = j.at("withdraw").get<RosterWithdraw_t>();
    v.phaseCheckinStates = j.at("phaseCheckinStates").get<std::vector<uint64_t>>();
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO_t>>();
    v.members = j.at("members").get<std::vector<BuybackMember_t>>();
  }
}
