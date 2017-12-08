#pragma once
#include <json.hpp>
#include <optional>
#include "RosterWithdraw.hpp"
#include "BuybackMember.hpp"
#include "PhaseRosterSubDTO.hpp"
#include "TicketOfferDTO.hpp"
namespace leagueapi {
  struct RosterDynamicStateDTO_t {
    int64_t rosterId;
    std::vector<TicketOfferDTO_t> ticketOffers;
    std::vector<PhaseRosterSubDTO_t> phaseRosterSubs;
    std::vector<BuybackMember_t> members;
    std::vector<uint64_t> phaseCheckinStates;
    RosterWithdraw_t withdraw;
    int64_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const RosterDynamicStateDTO_t& v) {
    j["rosterId"] = v.rosterId;
    j["ticketOffers"] = v.ticketOffers;
    j["phaseRosterSubs"] = v.phaseRosterSubs;
    j["members"] = v.members;
    j["phaseCheckinStates"] = v.phaseCheckinStates;
    j["withdraw"] = v.withdraw;
    j["tournamentId"] = v.tournamentId;
  }

  inline void from_json(const nlohmann::json& j, RosterDynamicStateDTO_t& v) {
    v.rosterId = j.at("rosterId").get<int64_t>();
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO_t>>();
    v.phaseRosterSubs = j.at("phaseRosterSubs").get<std::vector<PhaseRosterSubDTO_t>>();
    v.members = j.at("members").get<std::vector<BuybackMember_t>>();
    v.phaseCheckinStates = j.at("phaseCheckinStates").get<std::vector<uint64_t>>();
    v.withdraw = j.at("withdraw").get<RosterWithdraw_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
  }
  inline std::string to_string(const RosterDynamicStateDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
